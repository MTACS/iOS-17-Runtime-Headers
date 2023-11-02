
@interface PREditorBackgroundTask : NSObject <BSDescriptionStreamable> {
    bool  _invalidated;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1;
- (bool)isInvalidated;
- (id)reason;
- (void)setInvalidated:(bool)arg1;

@end
