
@interface CNVCardFilteredPersonScope : NSObject {
    NSSet * _excludedFields;
    unsigned long long  _filterOptions;
}

@property (getter=isEmpty, readonly) bool empty;
@property (readonly) NSSet *excludedFields;
@property (readonly) unsigned long long filterOptions;

- (void).cxx_destruct;
- (id)excludedFields;
- (unsigned long long)filterOptions;
- (id)initWithExcludedFields:(id)arg1 options:(unsigned long long)arg2;
- (bool)isEmpty;

@end
