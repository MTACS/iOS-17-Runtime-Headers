
@interface HMMediaDestinationController : NSObject <HFHomeKitObject, HMFLogging, HMFObject, HMObjectMerge> {
    NSArray * _availableDestinationIdentifiers;
    _HMContext * _context;
    <HMMediaDestinationControllerDataSource> * _dataSource;
    <HMMediaDestinationControllerDelegate> * _delegate;
    NSUUID * _destinationIdentifier;
    NSUUID * _identifier;
    NSString * _lastNotifiedDestinationIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _supportedOptions;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (copy) NSArray *availableDestinationIdentifiers;
@property (readonly, copy) NSArray *availableDestinations;
@property (retain) _HMContext *context;
@property <HMMediaDestinationControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMMediaDestinationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) <HMMediaDestination> *destination;
@property (copy) NSUUID *destinationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (retain) NSString *lastNotifiedDestinationIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property unsigned long long supportedOptions;
@property (readonly) bool supportsSameRoomB620Destinations;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_notifyDidUpdateDestination;
- (id)attributeDescriptions;
- (id)availableDestinationIdentifiers;
- (bool)availableDestinationIdentifiersIsEqualToIdentifiers:(id)arg1;
- (id)availableDestinations;
- (void)callCompletionHandler:(id /* block */)arg1;
- (void)callCompletionHandler:(id /* block */)arg1 error:(id)arg2;
- (void)configureLastNotifiedDestinationIdentifier;
- (void)configureWithContext:(id)arg1 dataSource:(id)arg2;
- (id)context;
- (id)dataSource;
- (id)delegate;
- (id)description;
- (id)destination;
- (id)destinationIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithControllerData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 destinationIdentifier:(id)arg2 supportedOptions:(unsigned long long)arg3 availableDestinationIdentifiers:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastNotifiedDestinationIdentifier;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (void)mergeSupportedOptionsWithNewController:(id)arg1;
- (void)notifyDidUpdateAvailableDestinations;
- (void)notifyDidUpdateDestination;
- (id)privateDescription;
- (void)setAvailableDestinationIdentifiers:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationIdentifier:(id)arg1;
- (void)setLastNotifiedDestinationIdentifier:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (id)shortDescription;
- (unsigned long long)supportedOptions;
- (bool)supportsSameRoomB620Destinations;
- (void)unconfigure;
- (id)uniqueIdentifier;
- (void)updateDestination:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)uniqueIdentifier;

@end
