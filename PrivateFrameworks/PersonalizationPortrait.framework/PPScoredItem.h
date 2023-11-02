
@interface PPScoredItem : NSObject <NSCopying, NSSecureCoding> {
    NSObject<NSCopying><NSSecureCoding> * _item;
    unsigned short  _resultCount;
    unsigned short  _resultPosition;
    double  _score;
}

@property (nonatomic, readonly) NSObject<NSCopying><NSSecureCoding> *item;
@property (nonatomic, readonly) unsigned short resultCount;
@property (nonatomic, readonly) unsigned short resultPosition;
@property (nonatomic, readonly) double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 score:(double)arg2;
- (id)initWithItem:(id)arg1 score:(double)arg2 resultPosition:(unsigned short)arg3 resultCount:(unsigned short)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredItem:(id)arg1;
- (id)item;
- (unsigned short)resultCount;
- (unsigned short)resultPosition;
- (double)score;

@end
