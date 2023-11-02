
@interface BLSHPendingUpdateToSpecifier : NSObject <BLSHPendingOperation> {
    bool  _completed;
    BLSHPresentationDateSpecifier * _specifier;
    bool  _started;
}

@property (getter=isCompleted) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BLSHPresentationDateSpecifier *specifier;
@property (getter=isStarted) bool started;
@property (readonly) Class superclass;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecifier:(id)arg1;
- (bool)isCompleted;
- (bool)isStarted;
- (void)setCompleted:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (id)specifier;
- (long long)type;

@end
