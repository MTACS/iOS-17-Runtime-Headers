
@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate> {
    NSString * _kind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithGlobalProgressKind:(id)arg1;
- (id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2;
- (bool)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2;

@end
