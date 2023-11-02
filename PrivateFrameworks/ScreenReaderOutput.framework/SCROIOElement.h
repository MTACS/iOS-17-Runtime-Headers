
@interface SCROIOElement : NSObject <NSCopying, SCROIOElementProtocol> {
    int  _identifier;
    unsigned int  _ioObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int identifier;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithIOObject:(unsigned int)arg1;
- (unsigned int)ioObject;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (int)transport;

@end
