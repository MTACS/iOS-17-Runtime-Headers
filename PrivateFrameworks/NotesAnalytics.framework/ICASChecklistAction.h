
@interface ICASChecklistAction : NSObject <AADataType> {
    long long  _checklistAction;
}

@property (nonatomic, readonly) long long checklistAction;

- (long long)checklistAction;
- (id)initWithChecklistAction:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
