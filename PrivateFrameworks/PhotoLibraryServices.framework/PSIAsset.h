
@interface PSIAsset : PSIObject <NSCopying> {
    PSIDate * _creationDate;
}

@property (readonly) PSIDate *creationDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)initWithUUID:(id)arg1 creationDate:(id)arg2;

@end
