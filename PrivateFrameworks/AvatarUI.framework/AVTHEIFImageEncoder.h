
@interface AVTHEIFImageEncoder : NSObject <AVTImageEncoder> {
    bool  _useHEICSSequence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useHEICSSequence;

+ (id)HEICSSequenceEncoder;
+ (id)defaultHEICEncoder;

- (id)dataFromImage:(id)arg1;
- (id)fileExtension;
- (id)imageFromData:(id)arg1 error:(id*)arg2;
- (id)imageFromURL:(id)arg1 error:(id*)arg2;
- (id)initUsingHeicsSequence:(bool)arg1;
- (bool)useHEICSSequence;

@end
