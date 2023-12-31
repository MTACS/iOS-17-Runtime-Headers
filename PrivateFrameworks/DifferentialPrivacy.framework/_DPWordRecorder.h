
@interface _DPWordRecorder : NSObject {
    <_DPDataRecorder><_DPDataRecorderKeyProperties> * _recorder;
    unsigned long long  _wordFragmentWidth;
}

@property (nonatomic, readonly) <_DPDataRecorder><_DPDataRecorderKeyProperties> *recorder;
@property (nonatomic, readonly) unsigned long long wordFragmentWidth;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(bool)arg3;
- (bool)record:(id)arg1;
- (id)recorder;
- (unsigned long long)wordFragmentWidth;

@end
