
@interface MLEQPreset : NSObject {
    int  _builtInPresetType;
    NSString * _localizedName;
    NSString * _name;
}

+ (id)eqPresetForBuiltInPresetType:(int)arg1;
+ (id)eqPresetForName:(id)arg1;

- (void).cxx_destruct;
- (int)builtInPresetType;
- (id)initWithBuiltInPresetType:(int)arg1;
- (id)localizedName;
- (id)name;
- (int)typeForAVController;

@end
