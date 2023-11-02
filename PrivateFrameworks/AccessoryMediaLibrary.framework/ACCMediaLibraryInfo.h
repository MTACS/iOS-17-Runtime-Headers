
@interface ACCMediaLibraryInfo : NSObject {
    ACCMediaLibraryUpdateLibraryInfo * _info;
    NSString * _libraryUID;
    bool  _state;
    bool  _stateInit;
}

@property (nonatomic, readonly) ACCMediaLibraryUpdateLibraryInfo *info;
@property (nonatomic, readonly) NSString *libraryUID;

- (void).cxx_destruct;
- (id)description;
- (bool)getState:(int)arg1;
- (id)info;
- (id)initWithInfo:(id)arg1;
- (id)libraryUID;
- (bool)setState:(int)arg1 value:(bool)arg2;

@end
