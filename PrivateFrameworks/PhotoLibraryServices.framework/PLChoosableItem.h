
@interface PLChoosableItem : NSObject {
    long long  _height;
    int  _type;
    NSString * _uniformTypeIdentifier;
    long long  _width;
}

@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) long long width;

+ (id)choosableItemsFromCloudResources:(id)arg1;

- (void).cxx_destruct;
- (long long)compareUsingWidth:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)height;
- (id)initWithCloudResource:(id)arg1;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChoosableItem:(id)arg1;
- (int)type;
- (id)uniformTypeIdentifier;
- (long long)width;

@end
