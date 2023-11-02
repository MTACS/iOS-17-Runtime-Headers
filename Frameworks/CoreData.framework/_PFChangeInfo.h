
@interface _PFChangeInfo : NSObject {
    unsigned long long  _changeType;
    NSIndexPath * _finalIndexPath;
    _NSDefaultSectionInfo * _finalSectionInfo;
    NSManagedObject * _object;
    NSIndexPath * _startIndexPath;
    _NSDefaultSectionInfo * _startSectionInfo;
}

@property (nonatomic, readonly, retain) NSManagedObject *object;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
