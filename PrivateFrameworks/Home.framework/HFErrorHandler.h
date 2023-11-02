
@interface HFErrorHandler : NSObject {
    NSString * _presentingAlertOperationType;
}

@property (nonatomic, retain) NSString *presentingAlertOperationType;

+ (id)_descriptionForHFErrorCode:(long long)arg1;
+ (id)_descriptionForHMErrorCode:(long long)arg1;
+ (id)_descriptionForHMHomeAddWalletKeyErrorCode:(long long)arg1;
+ (id)descriptionLocalizationKeyForError:(id)arg1;
+ (id)localizedDescriptionForError:(id)arg1;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (bool)_isErrorIndicativeOfApplicationBug:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (bool)_isErrorPermanent:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedDescriptionForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedStringOrNilIfNotFoundForKey:(id)arg1;
- (id)_localizedTitleForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (bool)canIgnoreError:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleError:(id)arg1 operationType:(id)arg2 options:(id)arg3 retryBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)handleError:(id)arg1 retryBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (void)logError:(id)arg1 operationDescription:(id)arg2;
- (id)presentingAlertOperationType;
- (void)setPresentingAlertOperationType:(id)arg1;

@end
