
@interface _SBSceneHandleObserverToken : NSObject <SBSceneHandleObserverToken> {
    NSMutableDictionary * _owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *owner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOwner:(id)arg1;
- (id)owner;

@end
