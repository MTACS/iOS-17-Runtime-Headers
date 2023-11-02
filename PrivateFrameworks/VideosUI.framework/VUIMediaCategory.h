
@interface VUIMediaCategory : NSObject {
    NSDictionary * _supportedChildMediaCollectionTypes;
    NSSet * _supportedMediaCollectionTypes;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSDictionary *supportedChildMediaCollectionTypes;
@property (nonatomic, copy) NSSet *supportedMediaCollectionTypes;
@property (nonatomic) unsigned long long type;

+ (id)mediaCatgeoryForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1;
- (id)description;
- (id)init;
- (void)setSupportedChildMediaCollectionTypes:(id)arg1;
- (void)setSupportedMediaCollectionTypes:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)supportedChildMediaCollectionTypes;
- (id)supportedMediaCollectionTypes;
- (unsigned long long)type;

@end
