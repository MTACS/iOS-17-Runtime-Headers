
@interface PLManagedObjectValidationResult : NSObject {
    NSArray * _errorMessages;
    NSArray * _infoMessages;
    bool  _status;
    NSManagedObject<PLValidatedManagedObject> * _validatedObject;
}

@property (nonatomic, retain) NSArray *errorMessages;
@property (nonatomic, retain) NSArray *infoMessages;
@property (nonatomic) bool status;
@property (nonatomic, retain) NSManagedObject<PLValidatedManagedObject> *validatedObject;

- (void).cxx_destruct;
- (id)errorMessages;
- (id)infoMessages;
- (void)setErrorMessages:(id)arg1;
- (void)setInfoMessages:(id)arg1;
- (void)setStatus:(bool)arg1;
- (void)setValidatedObject:(id)arg1;
- (bool)status;
- (id)validatedObject;

@end
