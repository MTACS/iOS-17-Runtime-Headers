
@interface _HDSPConcreteSource : NSObject <HDSPSource> {
    bool  _dontNotify;
    bool  _dontSync;
    NSString * _sourceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dontNotify;
@property (nonatomic) bool dontSync;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)dontNotify;
- (bool)dontSync;
- (void)setDontNotify:(bool)arg1;
- (void)setDontSync:(bool)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (id)sourceIdentifier;

@end
