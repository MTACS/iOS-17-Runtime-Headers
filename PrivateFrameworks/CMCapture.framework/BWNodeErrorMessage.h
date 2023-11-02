
@interface BWNodeErrorMessage : BWNodeMessage {
    BWNodeError * _nodeError;
}

@property (readonly) BWNodeError *nodeError;

+ (id)newMessageWithNodeError:(id)arg1;

- (void)dealloc;
- (id)nodeError;

@end
