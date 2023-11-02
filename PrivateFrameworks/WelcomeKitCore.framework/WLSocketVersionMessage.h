
@interface WLSocketVersionMessage : WLSocketMessage {
    unsigned long long  _version;
}

@property (nonatomic) unsigned long long version;

- (id)initWithVersion:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
