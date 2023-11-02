
@interface SUScriptDownload : SUScriptObject {
    ISUDownload * _download;
}

@property (readonly) NSNumber *adamID;
@property (readonly) NSString *phase;
@property (readonly) float progress;

+ (void)initialize;
+ (id)phaseStringForDownload:(id)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)adamID;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithISUDownload:(id)arg1;
- (id)initWithSSDownload:(id)arg1;
- (id)phase;
- (float)progress;
- (id)scriptAttributeKeys;

@end
