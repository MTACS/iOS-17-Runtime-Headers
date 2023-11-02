
@interface CRKClassKitClassPropertyApplicatorResult : NSObject {
    bool  _classWasModified;
}

@property (nonatomic, readonly) bool classWasModified;

- (bool)classWasModified;
- (id)init;
- (id)initWithClassWasModified:(bool)arg1;

@end
