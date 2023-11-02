
@interface HVConsumerCoordinatorGuardedData : NSObject {
    HVBudget * _budget;
    NSMapTable * _interactionConsumers;
    NSMapTable * _mailConsumers;
    NSMapTable * _messagesConsumers;
    NSMapTable * _newsConsumers;
    NSMapTable * _notesConsumers;
    NSMapTable * _parsecConsumers;
    NSMapTable * _photosConsumers;
    NSMapTable * _remindersConsumers;
    NSMapTable * _safariConsumers;
    NSMapTable * _siriConsumers;
    NSMapTable * _thirdPartyAppConsumers;
    NSMapTable * _userActivityConsumers;
}

- (void).cxx_destruct;
- (id)init;

@end
