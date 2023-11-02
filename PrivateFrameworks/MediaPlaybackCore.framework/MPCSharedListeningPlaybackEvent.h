
@interface MPCSharedListeningPlaybackEvent : NSObject {
    MPModelGenericObject * _item;
    long long  _kind;
}

@property (nonatomic, readonly) MPModelGenericObject *item;
@property (nonatomic, readonly) long long kind;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKind:(long long)arg1;
- (id)initWithKind:(long long)arg1 item:(id)arg2;
- (id)item;
- (long long)kind;

@end
