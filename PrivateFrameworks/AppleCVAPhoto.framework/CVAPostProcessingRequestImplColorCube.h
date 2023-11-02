
@interface CVAPostProcessingRequestImplColorCube : NSObject <CVAPostProcessingRequest> {
    NSData * _backgroundColorCube;
    NSData * _foregroundColorCube;
    bool  _isMono;
    NSData * _singleColorCube;
}

@property (retain) NSData *backgroundColorCube;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSData *foregroundColorCube;
@property (readonly) unsigned long long hash;
@property bool isMono;
@property (retain) NSData *singleColorCube;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundColorCube;
- (id)foregroundColorCube;
- (bool)isMono;
- (void)setBackgroundColorCube:(id)arg1;
- (void)setForegroundColorCube:(id)arg1;
- (void)setIsMono:(bool)arg1;
- (void)setSingleColorCube:(id)arg1;
- (id)singleColorCube;

@end
