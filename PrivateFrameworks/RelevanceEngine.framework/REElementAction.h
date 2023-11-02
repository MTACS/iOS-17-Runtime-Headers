
@interface REElementAction : NSObject <NSCoding, NSCopying> {
    <REElementActionDelegate> * _delegate;
    bool  _forceExecution;
}

@property (nonatomic) <REElementActionDelegate> *delegate;
@property (nonatomic) bool forceExecution;

- (void).cxx_destruct;
- (void)_didFinish:(bool)arg1;
- (void)_performWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceExecution;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceExecution:(bool)arg1;

@end
