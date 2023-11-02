
@interface HKMedicationUserDomainConcept : HKUserDomainConcept <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _computedPropertyLock;
    NSDictionary * _localizedComponentNames;
    NSDictionary * _localizedOntologyBasicDoseForms;
    NSDictionary * _localizedOntologyBrandNames;
    NSDictionary * _localizedOntologyGenericNames;
    NSDictionary * _localizedOntologyLoggingUnitPlural;
    NSDictionary * _localizedOntologyLoggingUnitSingular;
    NSDictionary * _localizedOntologyManufacturedDoseForms;
    NSDictionary * _localizedOntologyPreferredNames;
    HKMedicationUserDomainConceptSemanticIdentifier * _semanticIdentifier;
}

@property (nonatomic, readonly) NSNumber *freeTextMedicationFormCode;
@property (nonatomic, readonly, copy) NSArray *freeTextMedicationIngredientNamedStrengthQuantities;
@property (nonatomic, readonly, copy) NSNumber *freeTextMedicationLoggingUnitCode;
@property (nonatomic, readonly, copy) NSString *freeTextMedicationName;
@property (nonatomic, readonly, copy) HKQuantity *freeTextMedicationStrengthQuantity;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyBasicDoseForms;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyBrandNames;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyComponentNames;
@property (nonatomic, readonly, copy) HKOntologyLocalizedEducationContent *localizedOntologyEducationContent;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyGenericNames;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyLoggingUnitPlural;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyLoggingUnitSingular;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyManufacturedDoseForms;
@property (nonatomic, readonly, copy) NSDictionary *localizedOntologyPreferredNames;
@property (nonatomic, readonly, copy) NSString *unlocalizedQuantifiedUnitStrengthPreferredDisplayString;
@property (nonatomic, readonly, copy) NSString *userSpecifiedName;
@property (nonatomic, readonly, copy) NSString *userSpecifiedNotes;
@property (nonatomic, readonly, copy) NSString *userVisualizationConfigJSONString;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (id)_typeIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dataDescription;
- (id)_deepCopy;
- (bool)canRequestSyncUponInsertion;
- (id)copyMedicationByUpdatingUserSpecifiedName:(id)arg1 userSpecifiedNotes:(id)arg2 userVisualizationConfigJSONString:(id)arg3;
- (id)displayNameComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)freeTextMedicationFormCode;
- (id)freeTextMedicationIngredientNamedStrengthQuantities;
- (id)freeTextMedicationLoggingUnitCode;
- (id)freeTextMedicationName;
- (id)freeTextMedicationStrengthQuantity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodingCollection:(id)arg1 linkCollection:(id)arg2 propertyCollection:(id)arg3;
- (id)initWithCodingCollection:(id)arg1 supplementalPropertyCollection:(id)arg2;
- (id)initWithConceptIdentifier:(id)arg1 userSpecifiedName:(id)arg2 userSpecifiedNotes:(id)arg3;
- (id)initWithOntologyCoding:(id)arg1 userSpecifiedName:(id)arg2 userSpecifiedNotes:(id)arg3;
- (id)initWithOntologyCoding:(id)arg1 userSpecifiedName:(id)arg2 userSpecifiedNotes:(id)arg3 medicationVisualizationConfig:(id)arg4 freeTextProperties:(id)arg5;
- (id)localizedOntologyBasicDoseForms;
- (id)localizedOntologyBrandNames;
- (id)localizedOntologyComponentNames;
- (id)localizedOntologyEducationContent;
- (id)localizedOntologyGenericNames;
- (id)localizedOntologyLoggingUnitPlural;
- (id)localizedOntologyLoggingUnitSingular;
- (id)localizedOntologyManufacturedDoseForms;
- (id)localizedOntologyPreferredNames;
- (id)loggingUnit;
- (id)semanticIdentifier;
- (id)unlocalizedQuantifiedUnitStrengthPreferredDisplayString;
- (id)userSpecifiedName;
- (id)userSpecifiedNotes;
- (id)userVisualizationConfigJSONString;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

- (void)applyCodableSubclassData:(id)arg1 mutableUserDomainConceptProperties:(id)arg2;
- (id)codableSubclassData;

@end
