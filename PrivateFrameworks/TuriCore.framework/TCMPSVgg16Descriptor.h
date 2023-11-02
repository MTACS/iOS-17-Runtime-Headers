
@interface TCMPSVgg16Descriptor : NSObject {
    TCMPSVgg16Block1Descriptor * _block1;
    TCMPSVgg16Block1Descriptor * _block2;
    TCMPSVgg16Block2Descriptor * _block3;
    TCMPSVgg16Block2Descriptor * _block4;
}

@property (nonatomic, retain) TCMPSVgg16Block1Descriptor *block1;
@property (nonatomic, retain) TCMPSVgg16Block1Descriptor *block2;
@property (nonatomic, retain) TCMPSVgg16Block2Descriptor *block3;
@property (nonatomic, retain) TCMPSVgg16Block2Descriptor *block4;

- (void).cxx_destruct;
- (id)block1;
- (id)block2;
- (id)block3;
- (id)block4;
- (id)init;
- (void)setBlock1:(id)arg1;
- (void)setBlock2:(id)arg1;
- (void)setBlock3:(id)arg1;
- (void)setBlock4:(id)arg1;

@end
