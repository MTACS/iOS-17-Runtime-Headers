
@interface MUPlacePhotoHeaderAttributionItem : NSObject {
    NSString * _displayName;
    unsigned long long  _visibility;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) unsigned long long visibility;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithDisplayName:(id)arg1 visibility:(unsigned long long)arg2;
- (unsigned long long)visibility;

@end
