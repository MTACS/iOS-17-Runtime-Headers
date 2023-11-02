
@interface SWEmbedAction : NSObject <SWEmbedAction> {
    NSDictionary * _info;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *info;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (bool)canHandle;
- (id)description;
- (id)info;
- (id)initWithType:(unsigned long long)arg1 info:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)perform;
- (unsigned long long)type;

@end
