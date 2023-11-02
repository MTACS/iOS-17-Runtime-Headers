
@interface BWInferenceSimpleTextureStorage : NSObject <BWInferenceTextureStorage> {
    NSMapTable * _entriesByRequirement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clear;
- (void)dealloc;
- (struct { union { id x_1_1_1; id x_1_1_2; } x1; id x2; }*)entryForRequirement:(id)arg1;
- (id)init;
- (void)setEntry:(struct { union { id x_1_1_1; id x_1_1_2; } x1; id x2; }*)arg1 forRequirement:(id)arg2;
- (void)setTexture:(id)arg1 forRequirement:(id)arg2;

@end
