
@interface PXSearchZeroKeywordBaseViewModel : NSObject {
    id  _displayInfo;
    long long  _itemType;
    id  _representedObject;
    NSString * _title;
}

@property (nonatomic, readonly) NSDictionary *debugDictionary;
@property (nonatomic, readonly) id displayInfo;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly) id representedObject;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)debugDictionary;
- (id)description;
- (id)displayInfo;
- (id)initForTesting;
- (id)initWithType:(long long)arg1 title:(id)arg2 representedObject:(id)arg3 displayInfo:(id)arg4;
- (long long)itemType;
- (id)representedObject;
- (id)title;

@end
