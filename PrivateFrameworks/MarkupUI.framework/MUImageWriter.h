
@interface MUImageWriter : NSObject

- (id)encodedModelFromAnnotationsController:(id)arg1 encrypt:(bool)arg2;
- (bool)writeUsingBaseImage:(id)arg1 withAnnotationsFromController:(id)arg2 asImageOfType:(id)arg3 toConsumer:(struct CGDataConsumer { }*)arg4 embedSourceImageAndAnnotationsAsMetadata:(bool)arg5 encryptPrivateMetadata:(bool)arg6 error:(id*)arg7;

@end
