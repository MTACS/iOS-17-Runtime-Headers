
@interface REDataImage : REImage {
    NSData * _data;
    double  _scale;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) double scale;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)scale;

// Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI

- (id)image;

@end
