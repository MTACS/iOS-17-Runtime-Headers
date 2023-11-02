
@interface ACTUserAction : NSObject <ACTUserAction> {
    unsigned long long  _inputSegment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inputSegment;
@property (readonly) Class superclass;

- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (unsigned long long)inputSegment;
- (void)setInputSegment:(unsigned long long)arg1;
- (id)shortDescription;
- (id)twoKeyTapShortDescription;

@end
