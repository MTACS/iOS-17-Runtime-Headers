
@interface GEOResourceInfo : NSObject {
    NSString * _eTag;
    NSArray * _equivalentResources;
    GEOResource * _resource;
}

@property (nonatomic, readonly) NSData *checksum;
@property (nonatomic, copy) NSString *eTag;
@property (nonatomic, copy) NSArray *equivalentResources;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOResource *resource;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int validationMethod;

- (void).cxx_destruct;
- (id)checksum;
- (id)description;
- (id)eTag;
- (id)equivalentResources;
- (id)initWithResource:(id)arg1;
- (id)name;
- (id)resource;
- (void)setETag:(id)arg1;
- (void)setEquivalentResources:(id)arg1;
- (bool)shouldCheckForUpdateForResourceAtPath:(id)arg1 useExtendedAttrs:(bool)arg2 forceUpdateCheck:(bool)arg3 log:(id)arg4;
- (int)type;
- (bool)validateResource:(id)arg1 log:(id)arg2;
- (bool)validateResourceAtPath:(id)arg1 useExtendedAttrs:(bool)arg2 log:(id)arg3;
- (int)validationMethod;

@end
