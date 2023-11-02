
@interface REFileImage : REImage {
    NSString * _path;
    double  _scale;
}

@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) double scale;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 scale:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)path;
- (double)scale;

// Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI

- (id)image;

@end
