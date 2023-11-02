
@interface FSFileSystem : NSObject {
    int  _containerState;
    NSError * _errorState;
}

@property int containerState;
@property (retain) NSError *errorState;

- (void).cxx_destruct;
- (int)containerState;
- (id)errorState;
- (void)setContainerState:(int)arg1;
- (void)setErrorState:(id)arg1;

@end
