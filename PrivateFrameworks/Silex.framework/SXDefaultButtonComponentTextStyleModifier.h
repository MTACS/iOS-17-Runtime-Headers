
@interface SXDefaultButtonComponentTextStyleModifier : NSObject <SXDOMModifying> {
    bool  _shouldReturnUnmodifiedDOM;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldReturnUnmodifiedDOM;
@property (readonly) Class superclass;

- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (void)setShouldReturnUnmodifiedDOM:(bool)arg1;
- (bool)shouldReturnUnmodifiedDOM;

@end
