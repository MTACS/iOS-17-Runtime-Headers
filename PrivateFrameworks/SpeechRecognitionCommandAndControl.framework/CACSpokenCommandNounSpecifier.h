
@interface CACSpokenCommandNounSpecifier : NSObject {
    NSArray * _items;
    unsigned int  _type;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned int)arg1 item:(id)arg2;
- (id)initWithType:(unsigned int)arg1 items:(id)arg2;
- (id)items;
- (unsigned int)type;

@end
