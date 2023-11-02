
@interface REMTemplateConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _shouldSaveCompleted;
    REMObjectID * _sourceListID;
}

@property (nonatomic, readonly) bool shouldSaveCompleted;
@property (nonatomic, readonly) REMObjectID *sourceListID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceListID:(id)arg1 shouldSaveCompleted:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)shouldSaveCompleted;
- (id)sourceListID;

@end
