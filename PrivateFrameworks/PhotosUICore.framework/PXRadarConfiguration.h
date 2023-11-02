
@interface PXRadarConfiguration : NSObject <NSCopying> {
    NSMutableArray * _attachments;
    bool  _attachmentsIncludeAnyUserAsset;
    long long  _classification;
    id /* block */  _completionHandler;
    long long  _component;
    NSString * _description;
    NSMutableArray * _diagnosticContainers;
    NSMutableArray * _diagnosticProviders;
    bool  _isProgressUIAllowed;
    NSArray * _keywordIDs;
    NSMutableArray * _legacyTapToRadars;
    NSMutableArray * _screenshots;
    NSString * _title;
    bool  _wantsPhotosDiagnostics;
    bool  _wantsSystemDiagnostics;
}

@property (nonatomic, readonly) NSMutableArray *attachments;
@property (nonatomic) bool attachmentsIncludeAnyUserAsset;
@property (nonatomic) long long classification;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) long long component;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *diagnosticContainers;
@property (nonatomic, readonly) NSMutableArray *diagnosticProviders;
@property (nonatomic) bool isProgressUIAllowed;
@property (nonatomic, copy) NSArray *keywordIDs;
@property (nonatomic, readonly) NSMutableArray *legacyTapToRadars;
@property (nonatomic, readonly) NSMutableArray *screenshots;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool wantsPhotosDiagnostics;
@property (nonatomic) bool wantsSystemDiagnostics;

- (void).cxx_destruct;
- (void)addAttachment:(id)arg1;
- (void)addDiagnosticProvider:(id)arg1;
- (void)addLegacyTapToRadar:(id)arg1;
- (void)addScreenshot:(id)arg1;
- (id)attachments;
- (bool)attachmentsIncludeAnyUserAsset;
- (long long)classification;
- (void)collectDiagnosticsWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (long long)component;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticContainers;
- (id)diagnosticProviders;
- (id)init;
- (bool)isProgressUIAllowed;
- (id)keywordIDs;
- (id)legacyTapToRadars;
- (id)screenshots;
- (void)setAttachmentsIncludeAnyUserAsset:(bool)arg1;
- (void)setClassification:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setComponent:(long long)arg1;
- (void)setDescription:(id)arg1;
- (void)setIsProgressUIAllowed:(bool)arg1;
- (void)setKeywordIDs:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWantsPhotosDiagnostics:(bool)arg1;
- (void)setWantsSystemDiagnostics:(bool)arg1;
- (id)title;
- (bool)wantsPhotosDiagnostics;
- (bool)wantsSystemDiagnostics;

@end
