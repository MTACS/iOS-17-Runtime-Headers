
@interface EMTMeaningDescription : NSObject <NSCopying> {
    NSString * _definition;
}

@property (nonatomic, readonly) NSString *definition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)definition;
- (id)initWithDefinition:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
