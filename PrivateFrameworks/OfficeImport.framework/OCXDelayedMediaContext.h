
@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {
    OCPPackage * mPackage;
    NSURL * mTargetLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataRep;
- (id)description;
- (id)initWithTargetLocation:(id)arg1 package:(id)arg2;
- (bool)loadDelayedNode:(id)arg1;
- (bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;

@end
