
@interface SILaplacian : NSObject {
    MPSImageLaplacian * _laplacianOperator;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)init;

@end
