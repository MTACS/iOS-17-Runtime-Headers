
@interface DNDSPlaceholderModesRecord : NSObject <DNDSBackingStoreRecord, NSCopying> {
    NSArray * _placeholderModes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *placeholderModes;
@property (readonly) Class superclass;

+ (id)backingStoreWithFileURL:(id)arg1;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithModePlaceholders:(id)arg1;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)placeholderModes;

@end
