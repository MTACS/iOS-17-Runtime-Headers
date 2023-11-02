
@interface MTLTag : NSObject {
    unsigned long long  _tagType;
}

@property (readonly) unsigned long long tagType;

- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithTagType:(unsigned long long)arg1;
- (unsigned long long)tagType;

@end
