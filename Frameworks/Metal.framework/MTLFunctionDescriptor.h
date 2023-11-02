
@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    unsigned long long  _pipelineOptions;
    NSDictionary * _pluginData;
    struct MTLFunctionDescriptorPrivate { 
        NSString *name; 
        NSString *specializedName; 
        unsigned long long options; 
        MTLFunctionConstantValues *constantValues; 
        NSArray *binaryArchives; 
        bool applyFunctionConstants; 
        NSArray *privateFunctions; 
    }  _private;
}

@property (nonatomic, copy) NSArray *binaryArchives;
@property (nonatomic, copy) MTLFunctionConstantValues *constantValues;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSString *specializedName;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)functionDescriptor;

- (bool)applyFunctionConstants;
- (id)binaryArchives;
- (id)constantValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (struct { unsigned char x1[32]; })hashStableWithFunction:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned long long)options;
- (unsigned long long)pipelineOptions;
- (id)pluginData;
- (id)privateFunctions;
- (void)setApplyFunctionConstants:(bool)arg1;
- (void)setBinaryArchives:(id)arg1;
- (void)setConstantValues:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPipelineOptions:(unsigned long long)arg1;
- (void)setPluginData:(id)arg1;
- (void)setPrivateFunctions:(id)arg1;
- (void)setSpecializedName:(id)arg1;
- (id)specializedName;

@end
