
@interface SWInteraction : NSObject <SWInteraction> {
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (id)description;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)perform;
- (unsigned long long)type;

@end
