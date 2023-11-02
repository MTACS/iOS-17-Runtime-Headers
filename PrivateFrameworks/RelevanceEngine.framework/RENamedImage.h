
@interface RENamedImage : REImage {
    NSBundle * _bundle;
    NSString * _name;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly, copy) NSString *name;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (void).cxx_destruct;
- (id)bundle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;

// Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI

- (id)image;

@end
