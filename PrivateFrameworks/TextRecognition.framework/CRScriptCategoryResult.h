
@interface CRScriptCategoryResult : NSObject <NSCopying> {
    float  _probability;
    NSObject<CRScriptCategory> * _scriptCategory;
}

@property (readonly) float probability;
@property (readonly) NSObject<CRScriptCategory> *scriptCategory;
@property (readonly) bool valid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithScriptCategory:(id)arg1 probability:(float)arg2;
- (float)probability;
- (id)scriptCategory;
- (bool)valid;

@end
