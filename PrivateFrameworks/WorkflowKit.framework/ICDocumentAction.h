
@interface ICDocumentAction : ICAction {
    NSArray * _fileTypes;
    NSArray * _inputContentClasses;
}

@property (nonatomic, readonly) NSArray *fileTypes;

- (void).cxx_destruct;
- (id)descriptionDictionary;
- (id)fileTypeForOpeningItem:(id)arg1;
- (id)fileTypes;
- (id)identifier;
- (id)inputContentClasses;
- (id)name;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;

@end
