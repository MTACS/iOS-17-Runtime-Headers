
@interface SecondPassConfig : NSObject {
    void useEndpointer;
    void waitForFinal;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool useEndpointer;
@property (nonatomic) bool waitForFinal;

- (id)description;
- (id)init;
- (void)setUseEndpointer:(bool)arg1;
- (void)setWaitForFinal:(bool)arg1;
- (bool)useEndpointer;
- (bool)waitForFinal;

@end
