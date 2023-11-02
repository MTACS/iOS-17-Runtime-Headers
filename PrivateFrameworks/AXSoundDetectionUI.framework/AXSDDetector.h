
@interface AXSDDetector : NSObject {
    bool  _enabled;
    NSString * _identifier;
    AXAsset * _model;
    NSString * _modelName;
    bool  _needsUpdate;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;
@property (nonatomic, readonly) unsigned long long contentVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isCompatiable;
@property (nonatomic, readonly) bool isCustom;
@property (nonatomic, readonly) bool isDownloading;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isUsingSoundPrint;
@property (nonatomic) bool modelFailed;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic, readonly) NSString *modelURLString;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool needsUpdate;

- (void).cxx_destruct;
- (id)category;
- (unsigned long long)compatibilityVersion;
- (unsigned long long)contentVersion;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithModel:(id)arg1;
- (bool)isCompatiable;
- (bool)isCustom;
- (bool)isDownloading;
- (bool)isEnabled;
- (bool)isInstalled;
- (bool)isOlderThanDetector:(id)arg1;
- (bool)isUsingSoundPrint;
- (id)model;
- (bool)modelFailed;
- (id)modelURL;
- (id)modelURLString;
- (id)name;
- (bool)needsUpdate;
- (id)properties;
- (void)setIdentifier:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setModelFailed:(bool)arg1;
- (void)setNeedsUpdate:(bool)arg1;

@end
