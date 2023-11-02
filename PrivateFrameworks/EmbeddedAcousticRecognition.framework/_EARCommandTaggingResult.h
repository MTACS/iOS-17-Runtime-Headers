
@interface _EARCommandTaggingResult : NSObject <NSCopying> {
    NSArray * _commandTaggings;
}

@property (nonatomic, readonly, copy) NSArray *commandTaggings;

- (void).cxx_destruct;
- (id)_initWithCommandTaggings:(id)arg1;
- (id)commandTaggings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
