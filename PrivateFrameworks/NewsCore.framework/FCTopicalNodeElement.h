
@interface FCTopicalNodeElement : NSObject <NSCopying> {
    NSString * _identifier;
    double  _score;
    NSSet * _topics;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;

@end
