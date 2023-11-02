
@interface PXVisualDiagnosticsConfiguration : NSObject <NSCopying, PXTapToRadarDiagnosticProvider> {
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultPageSize;
    bool  _isPrivateDataAllowed;
    NSString * _name;
    <PXVisualDiagnosticsProvider> * _rootProvider;
}

@property (nonatomic) struct CGSize { double x1; double x2; } defaultPageSize;
@property (nonatomic) bool isPrivateDataAllowed;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) <PXVisualDiagnosticsProvider> *rootProvider;

- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })defaultPageSize;
- (id)description;
- (id)init;
- (id)initWithRootProvider:(id)arg1;
- (bool)isPrivateDataAllowed;
- (id)name;
- (id)rootProvider;
- (void)setDefaultPageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsPrivateDataAllowed:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRootProvider:(id)arg1;

@end
