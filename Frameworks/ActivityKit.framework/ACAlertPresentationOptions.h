
@interface ACAlertPresentationOptions : NSObject {
    bool  _interrupting;
    bool  _optional;
}

@property (nonatomic) bool interrupting;
@property (nonatomic) bool optional;

- (bool)interrupting;
- (bool)optional;
- (void)setInterrupting:(bool)arg1;
- (void)setOptional:(bool)arg1;

@end
