
@protocol BWNodeRenderDelegate <NSObject>

@required

- (void)node:(BWNode *)arg1 format:(BWFormat *)arg2 didBecomeLiveForInput:(BWNodeInput *)arg3;
- (void)node:(BWNode *)arg1 format:(BWFormat *)arg2 didBecomeLiveForOutput:(BWNodeOutput *)arg3;
- (void)node:(BWNode *)arg1 willRenderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 forInput:(BWNodeInput *)arg3;

@end
