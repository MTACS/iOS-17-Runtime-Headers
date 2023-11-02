
@interface UPDialogActConverter : NSObject {
    UPUsoSerializer * _usoSerializer;
}

@property (readonly, copy) UPUsoSerializer *usoSerializer;

- (void).cxx_destruct;
- (id)_convertFromGaveOptionsDialogAct:(id)arg1 error:(id*)arg2;
- (id)_convertFromOfferedDialogAct:(id)arg1 error:(id*)arg2;
- (id)_convertFromPromptedDialogAct:(id)arg1 error:(id*)arg2;
- (id)_parseUserDialogAct:(id)arg1 error:(id*)arg2;
- (id)_parseUserDialogActGraph:(id)arg1 error:(id*)arg2;
- (id)convertFromDialogAct:(id)arg1 error:(id*)arg2;
- (id)initWithUsoSerializer:(id)arg1;
- (id)usoSerializer;

@end
